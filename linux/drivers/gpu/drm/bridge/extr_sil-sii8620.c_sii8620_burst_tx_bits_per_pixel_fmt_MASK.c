
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sii8620 {int dummy; } ;
struct TYPE_4__ {int checksum; } ;
struct mhl_burst_bits_per_pixel_fmt {int num_entries; TYPE_2__ hdr; TYPE_1__* desc; } ;
struct TYPE_3__ {int pixel_format; scalar_t__ stream_id; } ;


 int VAR_0 ;
 struct mhl_burst_bits_per_pixel_fmt* FUNC_0 (struct sii8620*,int const) ;
 scalar_t__ FUNC_1 (struct mhl_burst_bits_per_pixel_fmt*,int const) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct sii8620 *VAR_1, u8 VAR_2)
{
 struct mhl_burst_bits_per_pixel_fmt *VAR_3;
 const int VAR_4 = sizeof(*VAR_3) + sizeof(VAR_3->desc[0]);

 VAR_3 = FUNC_0(VAR_1, VAR_4);
 if (!VAR_3)
  return;

 FUNC_2(&VAR_3->hdr, VAR_0);
 VAR_3->num_entries = 1;
 VAR_3->desc[0].stream_id = 0;
 VAR_3->desc[0].pixel_format = VAR_2;
 VAR_3->hdr.checksum -= FUNC_1(VAR_3, VAR_4);
}
