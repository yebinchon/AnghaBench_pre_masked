
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int*,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_2, PyObject *VAR_3)
{
 u_int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_0(VAR_3, "iI", &VAR_7, &VAR_4))
  return (((void*)0));
 VAR_6 = FUNC_3(VAR_7, VAR_4);
 if (VAR_6 == -1) {
  FUNC_1(VAR_0, FUNC_4(VAR_1));
  return (((void*)0));
 }
 return (FUNC_2("i", VAR_6));
}
