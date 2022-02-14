
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_packet {int * header; int * payload; } ;
struct fw_ohci {int card; } ;
typedef int lock_old ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct fw_packet*) ;
 int FUNC_6 (struct fw_packet*,int *,int ,int *,int) ;
 int FUNC_7 (struct fw_ohci*,char*) ;
 int FUNC_8 (struct fw_ohci*,int ) ;
 int FUNC_9 (struct fw_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct fw_ohci *VAR_10,
         struct fw_packet *VAR_11, u32 VAR_12)
{
 struct fw_packet VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 __be32 *VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 VAR_14 = FUNC_2(VAR_11->header[0]);
 VAR_15 = FUNC_0(VAR_11->header[3]);
 VAR_19 = VAR_11->payload;
 VAR_16 = FUNC_1(VAR_11->header[3]);

 if (VAR_14 == VAR_8 &&
     VAR_16 == VAR_1 && VAR_15 == 8) {
  VAR_21 = FUNC_3(VAR_19[0]);
  VAR_22 = FUNC_3(VAR_19[1]);
 } else if (VAR_14 == VAR_9) {
  VAR_21 = 0;
  VAR_22 = 0;
 } else {
  FUNC_6(&VAR_13, VAR_11->header,
     VAR_7, ((void*)0), 0);
  goto out;
 }

 VAR_17 = (VAR_12 - VAR_0) / 4;
 FUNC_9(VAR_10, VAR_4, VAR_22);
 FUNC_9(VAR_10, VAR_2, VAR_21);
 FUNC_9(VAR_10, VAR_3, VAR_17);

 for (VAR_18 = 0; VAR_18 < 20; VAR_18++)
  if (FUNC_8(VAR_10, VAR_3) & 0x80000000) {
   VAR_20 = FUNC_4(FUNC_8(VAR_10,
       VAR_4));
   FUNC_6(&VAR_13, VAR_11->header,
      VAR_6,
      &VAR_20, sizeof(VAR_20));
   goto out;
  }

 FUNC_7(VAR_10, "swap not done (CSR lock timeout)\n");
 FUNC_6(&VAR_13, VAR_11->header, VAR_5, ((void*)0), 0);

 out:
 FUNC_5(&VAR_10->card, &VAR_13);
}
