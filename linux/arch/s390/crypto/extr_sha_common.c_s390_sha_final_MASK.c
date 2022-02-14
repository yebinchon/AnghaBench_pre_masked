
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct shash_desc {int tfm; } ;
struct s390_sha_ctx {unsigned int count; int func; int* state; int buf; } ;
typedef int bits ;
 int VAR_0 ;
 int FUNC_0 (int,int*,int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct s390_sha_ctx*,int,int) ;
 int FUNC_5 (int) ;
 struct s390_sha_ctx* FUNC_6 (struct shash_desc*) ;

int FUNC_7(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct s390_sha_ctx *VAR_3 = FUNC_6(VAR_1);
 unsigned int VAR_4 = FUNC_1(VAR_1->tfm);
 u64 VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_3->count % VAR_4;
 VAR_5 = VAR_3->count * 8;
 VAR_7 = FUNC_5(VAR_3->func) / sizeof(u32);
 if (VAR_7 < 0)
  return -VAR_0;


 switch (VAR_3->func) {
 case 130:
 case 129:
  FUNC_3(VAR_3->state + VAR_7, &VAR_5, sizeof(VAR_5));
  break;
 case 128:




  FUNC_4(VAR_3->state + VAR_7, 0x00, sizeof(VAR_5));
  VAR_7 += sizeof(u64) / sizeof(u32);
  FUNC_3(VAR_3->state + VAR_7, &VAR_5, sizeof(VAR_5));
  break;
 case 134:
 case 133:
 case 132:
 case 131:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_3->func, VAR_3->state, VAR_3->buf, VAR_6);


 FUNC_3(VAR_2, VAR_3->state, FUNC_2(VAR_1->tfm));

 FUNC_4(VAR_3, 0, sizeof *VAR_3);

 return 0;
}
