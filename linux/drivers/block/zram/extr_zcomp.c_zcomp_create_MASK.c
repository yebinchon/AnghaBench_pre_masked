
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcomp {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zcomp* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct zcomp*) ;
 struct zcomp* FUNC_2 (int,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct zcomp*) ;

struct zcomp *FUNC_5(const char *VAR_3)
{
 struct zcomp *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_3))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(sizeof(struct zcomp), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_4->name = VAR_3;
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4);
  return FUNC_0(VAR_5);
 }
 return VAR_4;
}
