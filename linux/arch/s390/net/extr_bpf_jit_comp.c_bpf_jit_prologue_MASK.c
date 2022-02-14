
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_jit {int seen; int prg; int base_ip; int tail_call_start; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int ,int ,int ,int) ;
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
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct bpf_jit*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct bpf_jit *VAR_13, u32 VAR_14)
{
 if (VAR_13->seen & VAR_9) {

  FUNC_7(0xd703f000 | VAR_12, 0xf000 | VAR_12);
 } else {

  FUNC_4(0xa7f40000, 6);
  FUNC_6(0);
 }

 VAR_13->tail_call_start = VAR_13->prg;

 FUNC_8(VAR_13, VAR_1, VAR_14);

 if (VAR_13->seen & VAR_7) {

  FUNC_0(0x0d00, VAR_4, VAR_2);
  VAR_13->base_ip = VAR_13->prg;
 }

 if (VAR_13->seen & VAR_8) {
  if (VAR_13->seen & VAR_6)

   FUNC_1(0xb9040000, VAR_5, VAR_3);

  FUNC_2(0x41000000, VAR_0, VAR_3, VAR_10);

  FUNC_3(0xa70b0000, VAR_3, -(VAR_11 + VAR_14));
  if (VAR_13->seen & VAR_6)

   FUNC_5(0xe3000000, 0x0024, VAR_5, VAR_2,
          VAR_3, 152);
 }
}
