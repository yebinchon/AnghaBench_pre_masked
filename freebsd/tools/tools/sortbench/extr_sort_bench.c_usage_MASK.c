
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 FUNC_1("Usage:\n");
 FUNC_1("\t%s: [alg] [test] [runs] [elt_power]\n", VAR_1);
 FUNC_1("\n");
 FUNC_1("Valid algs:\n");



 FUNC_1("\theap merge quick\n");

 FUNC_1("Valid tests:\n");
 FUNC_1("\trand sort part rev\n");
 FUNC_1("\trand: Random element array \n");
 FUNC_1("\tsort: Increasing order array \n");
 FUNC_1("\tpart: Partially ordered array\n");
 FUNC_1("\trev: Decreasing order array\n");
 FUNC_1("Run the algorithm [runs] times with 2^[elt_power] elements\n");
 FUNC_0(VAR_0);
}
