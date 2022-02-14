
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;
 char* VAR_0 ;
 int FUNC_2 (unsigned int*,int ,int) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 char* FUNC_4 (char const*,char) ;

void FUNC_5(unsigned *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;
 const char *VAR_7;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1) * VAR_2 * VAR_3);

 if (!VAR_0 || !*VAR_0)
  return;

 VAR_7 = VAR_0;
 for (;;) {
  char *VAR_8;
  int VAR_9 = FUNC_3(VAR_7, "%u.%u.%u", &VAR_4, &VAR_5, &VAR_6);
  if (VAR_9 < 3) {
   FUNC_0("amdgpu: could not parse disable_cu\n");
   return;
  }

  if (VAR_4 < VAR_2 && VAR_5 < VAR_3 && VAR_6 < 16) {
   FUNC_1("amdgpu: disabling CU %u.%u.%u\n", VAR_4, VAR_5, VAR_6);
   VAR_1[VAR_4 * VAR_3 + VAR_5] |= 1u << VAR_6;
  } else {
   FUNC_0("amdgpu: disable_cu %u.%u.%u is out of range\n",
      VAR_4, VAR_5, VAR_6);
  }

  VAR_8 = FUNC_4(VAR_7, ',');
  if (!VAR_8)
   break;
  VAR_7 = VAR_8 + 1;
 }
}
