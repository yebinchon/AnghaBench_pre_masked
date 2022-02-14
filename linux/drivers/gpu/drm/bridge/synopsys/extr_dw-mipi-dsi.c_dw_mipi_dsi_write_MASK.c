
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mipi_dsi_packet {int payload_length; int const* header; int * payload; } ;
struct dw_mipi_dsi {int dev; scalar_t__ base; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_mipi_dsi*,int ,int ) ;
 int FUNC_2 (struct dw_mipi_dsi*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,int const*,int) ;
 int FUNC_5 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct dw_mipi_dsi *VAR_4,
        const struct mipi_dsi_packet *VAR_5)
{
 const u8 *VAR_6 = VAR_5->payload;
 int VAR_7 = VAR_5->payload_length, VAR_8 = sizeof(u32), VAR_9;
 __le32 VAR_10;
 u32 VAR_11;

 while (VAR_7) {
  if (VAR_7 < VAR_8) {
   VAR_10 = 0;
   FUNC_4(&VAR_10, VAR_6, VAR_7);
   FUNC_1(VAR_4, VAR_2, FUNC_3(VAR_10));
   VAR_7 = 0;
  } else {
   FUNC_4(&VAR_10, VAR_6, VAR_8);
   FUNC_1(VAR_4, VAR_2, FUNC_3(VAR_10));
   VAR_6 += VAR_8;
   VAR_7 -= VAR_8;
  }

  VAR_9 = FUNC_5(VAR_4->base + VAR_1,
      VAR_11, !(VAR_11 & VAR_3), 1000,
      VAR_0);
  if (VAR_9) {
   FUNC_0(VAR_4->dev,
    "failed to get available write payload FIFO\n");
   return VAR_9;
  }
 }

 VAR_10 = 0;
 FUNC_4(&VAR_10, VAR_5->header, sizeof(VAR_5->header));
 return FUNC_2(VAR_4, FUNC_3(VAR_10));
}
