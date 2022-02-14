
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct hideep_ts {size_t* xfer_buf; int input_dev; int * key_codes; TYPE_1__* client; } ;
struct hideep_event {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int ,struct hideep_event const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct hideep_ts *VAR_6)
{
 const struct hideep_event *VAR_7 =
   (void *)&VAR_6->xfer_buf[VAR_5];
 const u8 *VAR_8 = &VAR_6->xfer_buf[VAR_0];
 int VAR_9 = VAR_6->xfer_buf[0];
 int VAR_10 = VAR_6->xfer_buf[1] & 0x0f;
 int VAR_11 = VAR_6->xfer_buf[1] & 0xf0;
 int VAR_12;


 FUNC_0(&VAR_6->client->dev, "mt = %d, key = %d, lpm = %02x",
  VAR_9, VAR_10, VAR_11);

 VAR_9 = FUNC_5(VAR_9, VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  FUNC_1(VAR_6->input_dev, VAR_7 + VAR_12);

 VAR_10 = FUNC_5(VAR_10, VAR_2);
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  u8 VAR_13 = VAR_8[VAR_12 * 2];

  FUNC_3(VAR_6->input_dev,
     VAR_6->key_codes[VAR_13 & VAR_1],
     VAR_13 & VAR_3);
 }

 FUNC_2(VAR_6->input_dev);
 FUNC_4(VAR_6->input_dev);
}
