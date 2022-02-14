
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct s5p_hash_reqctx {int engine; int digcnt; } ;
struct s5p_aes_dev {int hash_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct s5p_hash_reqctx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct s5p_aes_dev*,int ,int) ;
 int FUNC_4 (struct s5p_aes_dev*,struct s5p_hash_reqctx*) ;

__attribute__((used)) static void FUNC_5(struct s5p_aes_dev *VAR_12, size_t VAR_13,
    bool VAR_14)
{
 struct s5p_hash_reqctx *VAR_15 = FUNC_1(VAR_12->hash_req);
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 u64 VAR_22;

 VAR_20 = VAR_15->engine | VAR_4;

 if (FUNC_2(VAR_15->digcnt)) {
  FUNC_4(VAR_12, VAR_15);
  VAR_20 |= VAR_5;
 }

 if (VAR_14) {

  VAR_18 = VAR_13;
  VAR_19 = 0;

  VAR_22 = VAR_15->digcnt * 8;
  VAR_16 = (u32)VAR_22;
  VAR_17 = (u32)(VAR_22 >> 32);
 } else {
  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = 0;
  VAR_19 = FUNC_0(31);
 }

 VAR_21 = VAR_0 | VAR_1 |
      VAR_2 | VAR_3;

 FUNC_3(VAR_12, VAR_9, VAR_18);
 FUNC_3(VAR_12, VAR_8, VAR_19);
 FUNC_3(VAR_12, VAR_11, VAR_16);
 FUNC_3(VAR_12, VAR_10, VAR_17);

 FUNC_3(VAR_12, VAR_7, VAR_21);
 FUNC_3(VAR_12, VAR_6, VAR_20);
}
