
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* s; } ;
struct s_command {TYPE_2__ u; } ;
typedef int ssize_t ;
typedef scalar_t__ regoff_t ;
typedef int regex_t ;
struct TYPE_14__ {scalar_t__ re_nsub; } ;
struct TYPE_13__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
struct TYPE_12__ {int back; int space; int append_newline; scalar_t__ len; } ;
struct TYPE_10__ {scalar_t__ maxbref; int n; int wfd; scalar_t__ wfile; scalar_t__ p; int new; int linenum; int * re; } ;
typedef TYPE_3__ SPACE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__,int ) ;
 TYPE_6__* VAR_9 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int,char*,int ,int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* VAR_12 ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int *,char*,int ,int ,scalar_t__,int) ;
 int FUNC_6 (TYPE_3__*,char*,int ) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct s_command *VAR_17)
{
 SPACE VAR_18;
 regex_t *VAR_19;
 regoff_t VAR_20;
 int VAR_21, VAR_22;
 regoff_t VAR_23 = 0;
 char *VAR_24;

 VAR_24 = VAR_14;
 VAR_19 = VAR_17->u.s->re;
 if (VAR_19 == ((void*)0)) {
  if (VAR_9 != ((void*)0) && VAR_17->u.s->maxbref > VAR_9->re_nsub) {
   VAR_11 = VAR_17->u.s->linenum;
   FUNC_3(1, "%lu: %s: \\%u not defined in the RE",
     VAR_11, VAR_10, VAR_17->u.s->maxbref);
  }
 }
 if (!FUNC_5(VAR_19, VAR_14, 0, 0, 0, VAR_16))
  return (0);

 VAR_8.len = 0;
 VAR_20 = VAR_16;
 VAR_22 = VAR_17->u.s->n;
 VAR_21 = 1;

 do {

  if (VAR_22 <= 1 && (VAR_12[0].rm_so > VAR_23))
   FUNC_1(&VAR_8, VAR_24, VAR_12[0].rm_so - VAR_23, VAR_0);


  if (VAR_21 || (VAR_12[0].rm_so - VAR_23) ||
      VAR_12[0].rm_so != VAR_12[0].rm_eo) {
   if (VAR_22 <= 1) {

    FUNC_6(&VAR_8, VAR_14, VAR_17->u.s->new);
    if (VAR_22 == 1)
     VAR_22 = -1;
   } else {

    if (VAR_12[0].rm_eo - VAR_23)
     FUNC_1(&VAR_8, VAR_24, VAR_12[0].rm_eo - VAR_23,
         VAR_0);
    VAR_22--;
   }
  }


  VAR_24 = VAR_14 + VAR_12[0].rm_eo;
  VAR_20 = VAR_16 - VAR_12[0].rm_eo;
  VAR_23 = VAR_12[0].rm_eo;





  if (VAR_12[0].rm_so == VAR_12[0].rm_eo) {
   if (*VAR_24 == '\0' || *VAR_24 == '\n')
    VAR_20 = -1;
   else
    VAR_20--;
   if (*VAR_24 != '\0') {
     FUNC_1(&VAR_8, VAR_24++, 1, VAR_0);
    VAR_23++;
   }
   VAR_21 = 1;
  } else
   VAR_21 = 0;

 } while (VAR_22 >= 0 && VAR_20 >= 0 &&
     FUNC_5(VAR_19, VAR_14, VAR_7, 0, VAR_23, VAR_16));


 if (VAR_22 > 0)
  return (0);


 if (VAR_20 > 0)
  FUNC_1(&VAR_8, VAR_24, VAR_20, VAR_0);





 VAR_18 = VAR_6;
 VAR_6 = VAR_8;
 VAR_15 = VAR_18.append_newline;
 VAR_8 = VAR_18;
 VAR_8.space = VAR_8.back;


 if (VAR_17->u.s->p)
  FUNC_0();


 if (VAR_17->u.s->wfile && !VAR_13) {
  if (VAR_17->u.s->wfd == -1 && (VAR_17->u.s->wfd = FUNC_4(VAR_17->u.s->wfile,
      VAR_5|VAR_2|VAR_3|VAR_4, VAR_1)) == -1)
   FUNC_2(1, "%s", VAR_17->u.s->wfile);
  if (FUNC_7(VAR_17->u.s->wfd, VAR_14, VAR_16) != (ssize_t)VAR_16 ||
      FUNC_7(VAR_17->u.s->wfd, "\n", 1) != 1)
   FUNC_2(1, "%s", VAR_17->u.s->wfile);
 }
 return (1);
}
