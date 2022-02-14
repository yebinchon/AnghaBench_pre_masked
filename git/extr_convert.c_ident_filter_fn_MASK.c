
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct TYPE_5__ {int buf; } ;
struct ident_filter {int state; TYPE_1__ left; int ident; } ;
typedef int head ;




 int FUNC_0 (struct ident_filter*,char**,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(struct stream_filter *VAR_0,
      const char *VAR_1, size_t *VAR_2,
      char *VAR_3, size_t *VAR_4)
{
 struct ident_filter *VAR_5 = (struct ident_filter *)VAR_0;
 static const char VAR_6[] = "$Id";

 if (!VAR_1) {

  switch (VAR_5->state) {
  default:
   FUNC_2(&VAR_5->left, VAR_6, VAR_5->state);

  case 128:

  case 129:
   FUNC_0(VAR_5, &VAR_3, VAR_4);
  }
  return 0;
 }

 while (*VAR_2 || (VAR_5->state == 129)) {
  int VAR_7;

  if (VAR_5->state == 129) {
   FUNC_0(VAR_5, &VAR_3, VAR_4);
   if (!*VAR_4)
    break;
   continue;
  }

  VAR_7 = *(VAR_1++);
  (*VAR_2)--;

  if (VAR_5->state == 128) {




   FUNC_3(&VAR_5->left, VAR_7);
   if (VAR_7 != '\n' && VAR_7 != '$')
    continue;
   if (VAR_7 == '$' && !FUNC_1(VAR_5->left.buf)) {
    FUNC_5(&VAR_5->left, sizeof(VAR_6) - 1);
    FUNC_4(&VAR_5->left, VAR_5->ident);
   }
   VAR_5->state = 129;
   continue;
  }

  if (VAR_5->state < sizeof(VAR_6) &&
      VAR_6[VAR_5->state] == VAR_7) {
   VAR_5->state++;
   continue;
  }

  if (VAR_5->state)
   FUNC_2(&VAR_5->left, VAR_6, VAR_5->state);
  if (VAR_5->state == sizeof(VAR_6) - 1) {
   if (VAR_7 != ':' && VAR_7 != '$') {
    FUNC_3(&VAR_5->left, VAR_7);
    VAR_5->state = 0;
    continue;
   }

   if (VAR_7 == ':') {
    FUNC_3(&VAR_5->left, VAR_7);
    VAR_5->state = 128;
   } else {
    FUNC_4(&VAR_5->left, VAR_5->ident);
    VAR_5->state = 129;
   }
   continue;
  }

  FUNC_3(&VAR_5->left, VAR_7);
  VAR_5->state = 129;
 }
 return 0;
}
