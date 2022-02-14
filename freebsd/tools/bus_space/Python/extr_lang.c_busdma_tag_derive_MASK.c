
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int*,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_2, PyObject *VAR_3)
{
 u_long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u_int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_0(VAR_3, "ikkkkIkII", &VAR_12, &VAR_4, &VAR_5,
     &VAR_6, &VAR_7, &VAR_9, &VAR_8, &VAR_10, &VAR_11))
  return (((void*)0));
 VAR_13 = FUNC_3(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9,
     VAR_8, VAR_10, VAR_11);
 if (VAR_13 == -1) {
  FUNC_1(VAR_0, FUNC_4(VAR_1));
  return (((void*)0));
 }
 return (FUNC_2("i", VAR_13));
}
