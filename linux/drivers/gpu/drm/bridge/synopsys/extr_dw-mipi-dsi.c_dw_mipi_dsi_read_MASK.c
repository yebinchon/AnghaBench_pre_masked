
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mipi_dsi_msg {int rx_len; int* rx_buf; } ;
struct dw_mipi_dsi {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_mipi_dsi*,int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dw_mipi_dsi *VAR_5,
       const struct mipi_dsi_msg *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_6->rx_len;
 u8 *VAR_11 = VAR_6->rx_buf;
 u32 VAR_12;


 VAR_9 = FUNC_2(VAR_5->base + VAR_1,
     VAR_12, !(VAR_12 & VAR_4),
     1000, VAR_0);
 if (VAR_9) {
  FUNC_0(VAR_5->dev, "Timeout during read operation\n");
  return VAR_9;
 }

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7 += 4) {

  VAR_9 = FUNC_2(VAR_5->base + VAR_1,
      VAR_12, !(VAR_12 & VAR_3),
      1000, VAR_0);
  if (VAR_9) {
   FUNC_0(VAR_5->dev, "Read payload FIFO is empty\n");
   return VAR_9;
  }

  VAR_12 = FUNC_1(VAR_5, VAR_2);
  for (VAR_8 = 0; VAR_8 < 4 && VAR_8 + VAR_7 < VAR_10; VAR_8++)
   VAR_11[VAR_7 + VAR_8] = VAR_12 >> (8 * VAR_8);
 }

 return VAR_9;
}
