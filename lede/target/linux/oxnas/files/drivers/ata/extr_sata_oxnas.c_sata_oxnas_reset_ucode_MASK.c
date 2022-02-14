
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_oxnas_host_priv {scalar_t__ core_base; } ;
struct ata_host {struct sata_oxnas_host_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct ata_host*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct ata_host *VAR_5, int VAR_6,
       int VAR_7)
{
 struct sata_oxnas_host_priv *VAR_8 = VAR_5->private_data;

 FUNC_0("ENTER\n");
 if (VAR_7) {
  u32 VAR_9;

  FUNC_3(VAR_5, VAR_4, VAR_6);
  VAR_9 = FUNC_1(VAR_8->core_base + VAR_0);
  VAR_9 |= VAR_1;
  FUNC_2(VAR_9, VAR_8->core_base + VAR_0);
 } else {

  FUNC_3(VAR_5, VAR_2, VAR_6);


  FUNC_2(0x0, VAR_8->core_base + VAR_3);
 }
}
