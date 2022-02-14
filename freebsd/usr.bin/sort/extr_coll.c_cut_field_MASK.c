
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_specs {int dummy; } ;
struct bwstring {int dummy; } ;


 struct bwstring* FUNC_0 (size_t) ;
 int FUNC_1 (struct bwstring*,struct bwstring const*,size_t,size_t) ;
 size_t FUNC_2 (struct bwstring const*,struct key_specs*) ;
 int FUNC_3 (struct bwstring const*,struct key_specs*,size_t*,size_t*,int*,int*) ;

__attribute__((used)) static struct bwstring *
FUNC_4(const struct bwstring *VAR_0, struct key_specs *VAR_1)
{
 struct bwstring *VAR_2 = ((void*)0);

 if (VAR_0 && VAR_1) {
  size_t VAR_3, VAR_4, VAR_5, VAR_6;
  bool VAR_7, VAR_8;

  VAR_3 = 0;
  VAR_5 = 0;
  VAR_7 = 0;
  VAR_8 = 0;

  FUNC_3(VAR_0, VAR_1, &VAR_3, &VAR_5,
      &VAR_7, &VAR_8);

  if (VAR_8)
   VAR_6 = 0;
  else {
   VAR_4 = FUNC_2(VAR_0, VAR_1);
   VAR_6 = (VAR_4 < VAR_5) ? 0 : (VAR_4 - VAR_5);
  }

  VAR_2 = FUNC_0(VAR_6);
  if (VAR_6)
   FUNC_1(VAR_2, VAR_0, VAR_5, VAR_6);
 } else
  VAR_2 = FUNC_0(0);

 return (VAR_2);
}
