
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; char* buf; } ;
struct work_item {int done; int source; TYPE_1__ out; } ;


 size_t FUNC_0 (struct work_item*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 struct work_item* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_5 (int,char const*,size_t) ;

__attribute__((used)) static void FUNC_6(struct work_item *VAR_8)
{
 int VAR_9;

 FUNC_1();
 VAR_8->done = 1;
 VAR_9 = VAR_5;
 for(; VAR_4[VAR_5].done && VAR_5 != VAR_7;
     VAR_5 = (VAR_5+1) % FUNC_0(VAR_4)) {
  VAR_8 = &VAR_4[VAR_5];
  if (VAR_8->out.len) {
   const char *VAR_10 = VAR_8->out.buf;
   size_t VAR_11 = VAR_8->out.len;


   if (VAR_3) {
    while (VAR_11) {
     VAR_11--;
     if (*VAR_10++ == '\n')
      break;
    }
    VAR_3 = 0;
   }

   FUNC_5(1, VAR_10, VAR_11);
  }
  FUNC_2(&VAR_8->source);
 }

 if (VAR_9 != VAR_5)
  FUNC_4(&VAR_2);

 if (VAR_0 && VAR_5 == VAR_6)
  FUNC_4(&VAR_1);

 FUNC_3();
}
