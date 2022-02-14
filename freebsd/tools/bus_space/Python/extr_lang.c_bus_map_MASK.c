
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*,char**,char**) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_2, PyObject *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_3, "ss", &VAR_4, &VAR_5))
  return (((void*)0));
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 == -1) {
  FUNC_1(VAR_0, FUNC_4(VAR_1));
  return (((void*)0));
 }
 return (FUNC_2("i", VAR_6));
}
