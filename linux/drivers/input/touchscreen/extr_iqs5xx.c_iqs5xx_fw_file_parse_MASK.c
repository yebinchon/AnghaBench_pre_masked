
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct iqs5xx_ihex_rec {char start; scalar_t__ data; scalar_t__ len; } ;
struct i2c_client {int dev; } ;
struct firmware {size_t size; char* data; } ;
typedef int rec_len ;
typedef int rec_hdr ;
typedef int rec_chksm ;
typedef int rec_addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int*,scalar_t__,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
    const char *VAR_7, u8 *VAR_8)
{
 const struct firmware *VAR_9;
 struct iqs5xx_ihex_rec *VAR_10;
 size_t VAR_11 = 0;
 int VAR_12, VAR_13;
 u16 VAR_14 = 1;
 u16 VAR_15;
 u8 VAR_16, VAR_17, VAR_18, VAR_19;
 u8 VAR_20[VAR_4];
 u8 VAR_21[VAR_5];
 VAR_12 = FUNC_5(&VAR_9, VAR_7, &VAR_6->dev);
 if (VAR_12) {
  FUNC_0(&VAR_6->dev, "Failed to request firmware %s: %d\n",
   VAR_7, VAR_12);
  return VAR_12;
 }

 do {
  if (VAR_11 + sizeof(*VAR_10) > VAR_9->size) {
   FUNC_0(&VAR_6->dev, "Insufficient firmware size\n");
   VAR_12 = -VAR_0;
   break;
  }
  VAR_10 = (struct iqs5xx_ihex_rec *)(VAR_9->data + VAR_11);
  VAR_11 += sizeof(*VAR_10);

  if (VAR_10->start != ':') {
   FUNC_0(&VAR_6->dev, "Invalid start at record %u\n",
    VAR_14);
   VAR_12 = -VAR_0;
   break;
  }

  VAR_12 = FUNC_2(VAR_20, VAR_10->len, sizeof(VAR_20));
  if (VAR_12) {
   FUNC_0(&VAR_6->dev, "Invalid header at record %u\n",
    VAR_14);
   break;
  }

  VAR_16 = *VAR_20;
  VAR_15 = FUNC_1(VAR_20 + sizeof(VAR_16));
  VAR_17 = *(VAR_20 + sizeof(VAR_16) + sizeof(VAR_15));

  if (VAR_11 + VAR_16 * 2 > VAR_9->size) {
   FUNC_0(&VAR_6->dev, "Insufficient firmware size\n");
   VAR_12 = -VAR_0;
   break;
  }
  VAR_11 += (VAR_16 * 2);

  VAR_12 = FUNC_2(VAR_21, VAR_10->data, VAR_16);
  if (VAR_12) {
   FUNC_0(&VAR_6->dev, "Invalid data at record %u\n",
    VAR_14);
   break;
  }

  VAR_12 = FUNC_2(&VAR_18,
    VAR_10->data + VAR_16 * 2, sizeof(VAR_18));
  if (VAR_12) {
   FUNC_0(&VAR_6->dev, "Invalid checksum at record %u\n",
    VAR_14);
   break;
  }

  VAR_19 = 0;
  for (VAR_13 = 0; VAR_13 < sizeof(VAR_20); VAR_13++)
   VAR_19 += VAR_20[VAR_13];
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
   VAR_19 += VAR_21[VAR_13];
  VAR_19 = ~VAR_19 + 1;

  if (VAR_19 != VAR_18 && VAR_15 < VAR_2) {
   FUNC_0(&VAR_6->dev,
    "Incorrect checksum at record %u\n",
    VAR_14);
   VAR_12 = -VAR_0;
   break;
  }

  switch (VAR_17) {
  case 129:
   if (VAR_15 < VAR_1 ||
       VAR_15 > VAR_3) {
    FUNC_0(&VAR_6->dev,
     "Invalid address at record %u\n",
     VAR_14);
    VAR_12 = -VAR_0;
   } else {
    FUNC_3(VAR_8 + VAR_15 - VAR_1,
           VAR_21, VAR_16);
   }
   break;
  case 128:
   break;
  default:
   FUNC_0(&VAR_6->dev, "Invalid type at record %u\n",
    VAR_14);
   VAR_12 = -VAR_0;
  }

  if (VAR_12)
   break;

  VAR_14++;
  while (VAR_11 < VAR_9->size) {
   if (*(VAR_9->data + VAR_11) == ':')
    break;
   VAR_11++;
  }
 } while (VAR_17 != 128);

 FUNC_4(VAR_9);

 return VAR_12;
}
