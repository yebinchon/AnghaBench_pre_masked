
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, off_t VAR_1, u_int VAR_2)
{
 FUNC_1("Asynchronous random reads:\n");

 FUNC_1("\tsectorsize:  ");
 FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_2 != 4096) {
  FUNC_1("\t4 kbytes:    ");
  FUNC_0(VAR_0, VAR_1, 4096);
 }

 FUNC_1("\t32 kbytes:   ");
 FUNC_0(VAR_0, VAR_1, 32 * 1024);

 FUNC_1("\t128 kbytes:  ");
 FUNC_0(VAR_0, VAR_1, 128 * 1024);

 FUNC_1("\n");
}
