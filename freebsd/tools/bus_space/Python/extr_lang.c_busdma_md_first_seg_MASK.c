
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*,int*,int*) ;
 int * FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static PyObject *
FUNC_3(PyObject *VAR_1, PyObject *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 if (!FUNC_0(VAR_2, "ii", &VAR_4, &VAR_6))
  return (((void*)0));
 VAR_5 = FUNC_2(VAR_4, VAR_6);
 if (VAR_5 == -1)
  VAR_0;
 return (FUNC_1("i", VAR_5));
}
