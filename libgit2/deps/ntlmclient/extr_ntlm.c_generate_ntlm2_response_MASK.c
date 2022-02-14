
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned char uint64_t ;
typedef unsigned char uint32_t ;
struct TYPE_10__ {int target_info_len; unsigned char* target_info; } ;
struct TYPE_11__ {unsigned char* ntlm2_response; size_t ntlm2_response_len; TYPE_1__ challenge; int nonce; int timestamp; } ;
typedef TYPE_2__ ntlm_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (unsigned char*,TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 unsigned char FUNC_5 (int) ;
 unsigned char FUNC_6 (int ) ;
 unsigned char* FUNC_7 (size_t) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int FUNC_10 (TYPE_2__*,char*) ;

__attribute__((used)) static bool FUNC_11(ntlm_client *VAR_1)
{
 size_t VAR_2, VAR_3;
 uint32_t VAR_4;
 uint64_t VAR_5, VAR_6;
 unsigned char VAR_7[VAR_0];
 unsigned char VAR_8[16];
 unsigned char *VAR_9;

 if (!FUNC_4(VAR_1) ||
  !FUNC_1(VAR_1) ||
  !FUNC_3(VAR_7, VAR_1))
  return 0;

 VAR_2 = VAR_1->challenge.target_info_len + 32;
 VAR_3 = VAR_2 + 16;

 if ((VAR_1->ntlm2_response = FUNC_7(VAR_3)) == ((void*)0)) {
  FUNC_10(VAR_1, "out of memory");
  return 0;
 }


 VAR_9 = VAR_1->ntlm2_response + 16;


 VAR_4 = FUNC_5(0x01010000);
 VAR_5 = FUNC_6(VAR_1->timestamp);
 VAR_6 = FUNC_6(VAR_1->nonce);


 FUNC_8(&VAR_9[0], &VAR_4, 4);
 FUNC_9(&VAR_9[4], 0, 4);
 FUNC_8(&VAR_9[8], &VAR_5, 8);
 FUNC_8(&VAR_9[16], &VAR_6, 8);
 FUNC_9(&VAR_9[24], 0, 4);
 FUNC_8(&VAR_9[28], VAR_1->challenge.target_info, VAR_1->challenge.target_info_len);
 FUNC_9(&VAR_9[28 + VAR_1->challenge.target_info_len], 0, 4);

 if (!FUNC_2(VAR_8, VAR_1, VAR_7, VAR_9, VAR_2))
  return 0;

 FUNC_8(VAR_1->ntlm2_response, VAR_8, 16);
 VAR_1->ntlm2_response_len = VAR_3;

 if (!FUNC_0(VAR_1, VAR_7))
  return 0;

 return 1;
}
