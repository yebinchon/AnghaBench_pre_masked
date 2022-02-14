
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc {int dummy; } ;
struct dc_link {int ddc; } ;
typedef enum channel_id { ____Placeholder_channel_id } channel_id ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ddc*) ;
 struct ddc* FUNC_2 (int ) ;

__attribute__((used)) static enum channel_id FUNC_3(struct dc_link *VAR_9)
{
 struct ddc *VAR_10;
 enum channel_id VAR_11 = VAR_8;

 VAR_10 = FUNC_2(VAR_9->ddc);

 if (VAR_10) {
  switch (FUNC_1(VAR_10)) {
  case 135:
   VAR_11 = VAR_0;
   break;
  case 134:
   VAR_11 = VAR_1;
   break;
  case 133:
   VAR_11 = VAR_2;
   break;
  case 132:
   VAR_11 = VAR_3;
   break;
  case 131:
   VAR_11 = VAR_4;
   break;
  case 130:
   VAR_11 = VAR_5;
   break;
  case 129:
   VAR_11 = VAR_6;
   break;
  case 128:
   VAR_11 = VAR_7;
   break;
  default:
   FUNC_0();
   break;
  }
 }

 return VAR_11;
}
