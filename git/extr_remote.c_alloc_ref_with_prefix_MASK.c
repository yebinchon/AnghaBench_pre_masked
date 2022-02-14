
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {scalar_t__ name; } ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;
 int FUNC_1 (int,size_t,size_t,int) ;
 size_t FUNC_2 (char const*) ;
 struct ref* FUNC_3 (int,int ) ;

__attribute__((used)) static struct ref *FUNC_4(const char *VAR_0, size_t VAR_1,
  const char *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2);
 struct ref *VAR_4 = FUNC_3(1, FUNC_1(sizeof(*VAR_4), VAR_1, VAR_3, 1));
 FUNC_0(VAR_4->name, VAR_0, VAR_1);
 FUNC_0(VAR_4->name + VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
