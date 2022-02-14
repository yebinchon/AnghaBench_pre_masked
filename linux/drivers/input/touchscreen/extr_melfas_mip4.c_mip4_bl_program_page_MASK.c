
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mip4_ts {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (struct mip4_ts*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct mip4_ts *VAR_11, int VAR_12,
    const u8 *VAR_13, int VAR_14, u16 VAR_15)
{
 u8 VAR_16[6];
 u8 *VAR_17;
 u16 VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_0(&VAR_11->client->dev, "Writing page @%#06x (%d)\n",
  VAR_12, VAR_14);

 if (VAR_14 > VAR_5 || VAR_14 % VAR_4) {
  FUNC_1(&VAR_11->client->dev,
   "Invalid page length: %d\n", VAR_14);
  return -VAR_0;
 }

 VAR_17 = FUNC_4(2 + VAR_4, VAR_3);
 if (!VAR_17)
  return -VAR_2;


 VAR_16[0] = VAR_7;
 VAR_16[1] = VAR_10;
 FUNC_8(VAR_12, &VAR_16[2]);
 VAR_19 = FUNC_2(VAR_11->client, VAR_16, 6);
 if (VAR_19 != 6) {
  VAR_20 = VAR_19 < 0 ? VAR_19 : -VAR_1;
  FUNC_1(&VAR_11->client->dev,
   "Failed to send write page address: %d\n", VAR_20);
  goto out;
 }


 VAR_16[0] = VAR_7;
 VAR_16[1] = VAR_9;
 FUNC_8(VAR_14, &VAR_16[2]);
 VAR_19 = FUNC_2(VAR_11->client, VAR_16, 6);
 if (VAR_19 != 6) {
  VAR_20 = VAR_19 < 0 ? VAR_19 : -VAR_1;
  FUNC_1(&VAR_11->client->dev,
   "Failed to send write page size: %d\n", VAR_20);
  goto out;
 }


 for (VAR_18 = 0;
      VAR_18 < VAR_14;
      VAR_18 += VAR_4) {
  FUNC_0(&VAR_11->client->dev,
   "writing chunk at %#04x (size %d)\n",
   VAR_18, VAR_4);
  FUNC_7(VAR_15 + VAR_18, VAR_17);
  FUNC_5(&VAR_17[2], &VAR_13[VAR_18], VAR_4);
  VAR_19 = FUNC_2(VAR_11->client,
          VAR_17, 2 + VAR_4);
  if (VAR_19 != 2 + VAR_4) {
   VAR_20 = VAR_19 < 0 ? VAR_19 : -VAR_1;
   FUNC_1(&VAR_11->client->dev,
    "Failed to read chunk at %#04x (size %d): %d\n",
    VAR_18, VAR_4, VAR_20);
   goto out;
  }
 }


 VAR_16[0] = VAR_7;
 VAR_16[1] = VAR_8;
 VAR_16[2] = VAR_6;
 VAR_19 = FUNC_2(VAR_11->client, VAR_16, 3);
 if (VAR_19 != 3) {
  VAR_20 = VAR_19 < 0 ? VAR_19 : -VAR_1;
  FUNC_1(&VAR_11->client->dev,
   "Failed to send 'write' command: %d\n", VAR_20);
  goto out;
 }


 VAR_20 = FUNC_6(VAR_11);

out:
 FUNC_3(VAR_17);
 return VAR_20 ? VAR_20 : 0;
}
