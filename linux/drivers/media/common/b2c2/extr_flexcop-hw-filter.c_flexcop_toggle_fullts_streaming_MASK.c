
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_device {int fullts_streaming_state; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct flexcop_device*,int ,int) ;
 int FUNC_2 (struct flexcop_device*,int) ;

__attribute__((used)) static int FUNC_3(struct flexcop_device *VAR_0, int VAR_1)
{
 if (VAR_0->fullts_streaming_state != VAR_1) {
  FUNC_0("%s full TS transfer\n",VAR_1 ? "enabling" : "disabling");
  FUNC_1(VAR_0, 0, 0x1fe0 * (!VAR_1));
  FUNC_2(VAR_0, VAR_1);
  VAR_0->fullts_streaming_state = VAR_1;
 }
 return 0;
}
