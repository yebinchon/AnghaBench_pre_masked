
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifc {int dummy; } ;


 int FUNC_0 (char*) ;
 struct ifc** VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ifc**,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ifc**,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, struct ifc *VAR_3)
{
 int VAR_4, VAR_5;
 struct ifc **VAR_6;

 if (!VAR_0) {
  VAR_1 = 5;
  VAR_0 = (struct ifc **)
   FUNC_1(sizeof(*VAR_0) * VAR_1);
  if (VAR_0 == ((void*)0)) {
   FUNC_0("malloc");

  }
  FUNC_2(VAR_0, 0, sizeof(*VAR_0) * VAR_1);
 }
 VAR_4 = VAR_1;
 for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5 *= 2)
  ;
 if (VAR_4 != VAR_5) {
  VAR_6 = (struct ifc **)FUNC_3(VAR_0,
      sizeof(*VAR_0) * VAR_5);
  if (VAR_6 == ((void*)0)) {
   FUNC_0("realloc");

  }
  FUNC_2(VAR_6 + VAR_4, 0, sizeof(*VAR_0) * (VAR_1 - VAR_4));
  VAR_0 = VAR_6;
  VAR_1 = VAR_5;
 }
 VAR_0[VAR_2] = VAR_3;
}
