
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct dcons_state {int flags; int escape_state; scalar_t__ escape; int reset; } ;
struct dcons_port {int skip_read; int outfd; } ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct dcons_port*) ;
 scalar_t__ FUNC_2 (struct dcons_port*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;



 int VAR_5 ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dcons_state*,struct dcons_port*) ;
 int FUNC_6 (struct dcons_state*,struct dcons_port*) ;
 int FUNC_7 (struct dcons_state*,struct dcons_port*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ,...) ;

__attribute__((used)) static int
FUNC_11(struct dcons_state *VAR_7, struct dcons_port *VAR_8,
    u_char *VAR_9, int VAR_10, u_char *VAR_11, int *VAR_12)
{
 int VAR_13;
 char *VAR_14;

 while (VAR_10 > 0) {
  VAR_13 = 0;
  if (FUNC_1(VAR_8)) {
   if ((VAR_7->flags & VAR_1) != 0) {

    if (VAR_8->skip_read -- > 0) {
     VAR_9 ++;
     VAR_10 --;
     continue;
    }
    if (*VAR_9 == VAR_2) {
     if (VAR_6)
      FUNC_8("(IAC)");
     VAR_8->skip_read = 2;
     VAR_9 ++;
     VAR_10 --;
     continue;
    }
    if (*VAR_9 == 0) {
     if (VAR_6)
      FUNC_8("(0 stripped)");
     VAR_9 ++;
     VAR_10 --;
     continue;
    }
   }
   switch (VAR_7->escape_state) {
   case 130:
    if (*VAR_9 == VAR_7->escape) {
     VAR_13 = 1;
     VAR_7->escape_state = 129;
    } else
     VAR_7->escape_state = VAR_4;
    break;
   case 129:
    VAR_7->escape_state = VAR_4;
    VAR_13 = 1;
    if (*VAR_9 == '.')
     FUNC_4(0);
    else if (*VAR_9 == FUNC_0('B')) {
     FUNC_3(VAR_5, VAR_11, 3);
     VAR_11 += 3;
     *VAR_12 += 3;
    }
    else if (*VAR_9 == FUNC_0('G'))
     FUNC_5(VAR_7, VAR_8);
    else if ((*VAR_9 == FUNC_0('R'))
      && (VAR_7->reset != 0)) {
     VAR_7->escape_state = 128;
     VAR_14 = "\r\n[Are you sure to reset target? (y/N)]";
     FUNC_10(VAR_8->outfd, VAR_14, FUNC_9(VAR_14));
    } else if (*VAR_9 == FUNC_0('Z'))
     FUNC_7(VAR_7, VAR_8);
    else {
     VAR_13 = 0;
     *VAR_11++ = VAR_7->escape;
     (*VAR_12) ++;
    }
    break;
   case 128:
    VAR_7->escape_state = VAR_4;
    VAR_13 = 1;
    if (*VAR_9 == 'y')
     FUNC_6(VAR_7, VAR_8);
    else {
     FUNC_10(VAR_8->outfd, VAR_9, 1);
     FUNC_10(VAR_8->outfd, "\r\n", 2);
    }
    break;
   }
   if (*VAR_9 == VAR_3)
    VAR_7->escape_state = 130;
  } else if (FUNC_2(VAR_8)) {

   if (*VAR_9 == FUNC_0('C') && (VAR_7->flags & VAR_0) != 0) {
    FUNC_3(VAR_5, VAR_11, 3);
    VAR_11 += 3;
    VAR_9 ++;
    *VAR_12 += 3;

    VAR_10 = 0;
    break;
   }
  }
  if (!VAR_13) {
   *VAR_11++ = *VAR_9;
   (*VAR_12) ++;
  }
  VAR_9 ++;
  VAR_10 --;
 }
 return (*VAR_12);

}
