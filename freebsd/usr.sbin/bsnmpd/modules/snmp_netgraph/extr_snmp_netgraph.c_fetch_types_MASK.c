
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct typelist {size_t numtypes; TYPE_1__* typeinfo; } ;
struct TYPE_4__ {size_t* subs; size_t len; } ;
struct ngtype {size_t* name; TYPE_2__ index; scalar_t__ data; } ;
struct ng_mesg {size_t* name; TYPE_2__ index; scalar_t__ data; } ;
struct TYPE_3__ {int type_name; } ;


 int FUNC_0 (struct ngtype*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ngtype* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ngtype*,int ) ;
 int FUNC_3 (struct ngtype*) ;
 int VAR_3 ;
 struct ngtype* FUNC_4 (int) ;
 struct ngtype* FUNC_5 (int ,int ,int ,int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (size_t*,int ) ;
 size_t FUNC_7 (size_t*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_8(void)
{
 struct ngtype *VAR_8;
 struct typelist *VAR_9;
 struct ng_mesg *VAR_10;
 u_int VAR_11, VAR_12;

 if (VAR_7 <= VAR_5)
  return (0);

 while ((VAR_8 = FUNC_1(&VAR_4)) != ((void*)0)) {
  FUNC_2(&VAR_4, VAR_8, VAR_3);
  FUNC_3(VAR_8);
 }

 if ((VAR_10 = FUNC_5(VAR_6, VAR_0,
     VAR_1, ((void*)0), 0)) == ((void*)0))
  return (VAR_2);
 VAR_9 = (struct typelist *)(void *)VAR_10->data;

 for (VAR_11 = 0; VAR_11 < VAR_9->numtypes; VAR_11++) {
  if ((VAR_8 = FUNC_4(sizeof(*VAR_8))) == ((void*)0)) {
   FUNC_3(VAR_10);
   return (VAR_2);
  }
  FUNC_6(VAR_8->name, VAR_9->typeinfo[VAR_11].type_name);
  VAR_8->index.subs[0] = FUNC_7(VAR_8->name);
  VAR_8->index.len = VAR_8->index.subs[0] + 1;
  for (VAR_12 = 0; VAR_12 < VAR_8->index.subs[0]; VAR_12++)
   VAR_8->index.subs[VAR_12 + 1] = VAR_8->name[VAR_12];

  FUNC_0(VAR_8, &VAR_4);
 }

 VAR_5 = VAR_7;

 FUNC_3(VAR_10);
 return (0);
}
