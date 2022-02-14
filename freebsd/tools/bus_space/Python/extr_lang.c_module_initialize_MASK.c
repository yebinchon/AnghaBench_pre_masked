
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*,int *) ;
 int * FUNC_1 (char*,int) ;

__attribute__((used)) static PyObject *
FUNC_2(PyObject *VAR_0, PyObject *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_1, "MD_BUS_SPACE", FUNC_1("i", 0));
 FUNC_0(VAR_1, "MD_PHYS_SPACE", FUNC_1("i", 1));
 FUNC_0(VAR_1, "MD_VIRT_SPACE", FUNC_1("i", 2));

 FUNC_0(VAR_1, "SYNC_PREREAD", FUNC_1("i", 1));
 FUNC_0(VAR_1, "SYNC_POSTREAD", FUNC_1("i", 2));
 FUNC_0(VAR_1, "SYNC_PREWRITE", FUNC_1("i", 4));
 FUNC_0(VAR_1, "SYNC_POSTWRITE", FUNC_1("i", 8));

 FUNC_0(VAR_0, "dma", VAR_1);
 return (VAR_0);
}
