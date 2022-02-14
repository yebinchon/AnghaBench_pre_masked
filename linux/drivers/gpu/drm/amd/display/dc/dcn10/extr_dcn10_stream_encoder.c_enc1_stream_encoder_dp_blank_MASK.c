
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct dcn10_stream_encoder {int dummy; } ;


 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int) ;

void FUNC_4(
 struct stream_encoder *VAR_7)
{
 struct dcn10_stream_encoder *VAR_8 = FUNC_0(VAR_7);
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = VAR_0 * 10;
 FUNC_1(VAR_3, VAR_5, &VAR_9);
 if ((VAR_9 & 0x1) == 0)

  return;



 FUNC_2(VAR_3, VAR_4, 2);




 VAR_10 = VAR_0 * 250;


 FUNC_2(VAR_3, VAR_5, 0);






 FUNC_3(VAR_3, VAR_6,
   0,
   10, VAR_10);







 FUNC_2(VAR_1, VAR_2, 1);
}
