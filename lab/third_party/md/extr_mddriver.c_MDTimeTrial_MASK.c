
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
typedef int MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (long*) ;

__attribute__((used)) static void FUNC_6(void)
{
  MD_CTX VAR_3;
  time_t VAR_4, VAR_5;
  unsigned char VAR_6[VAR_2], VAR_7[16];
  unsigned int VAR_8;

  FUNC_4("MD%d time trial. Digesting %d %d-byte blocks ...",
         VAR_0, VAR_2, VAR_1);


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
    VAR_6[VAR_8] = (unsigned char)(VAR_8 & 0xff);


  FUNC_5(&VAR_5);


  FUNC_1(&VAR_3);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    FUNC_3(&VAR_3, VAR_6, VAR_2);
  FUNC_0(VAR_7, &VAR_3);


  FUNC_5(&VAR_4);

  FUNC_4(" done\n");
  FUNC_4("Digest = ");
  FUNC_2(VAR_7);
  FUNC_4("\nTime = %ld seconds\n", (long)(VAR_4-VAR_5));
  FUNC_4("Speed = %ld bytes/second\n",
         (long)VAR_2 * (long)VAR_1/(VAR_4-VAR_5));
}
