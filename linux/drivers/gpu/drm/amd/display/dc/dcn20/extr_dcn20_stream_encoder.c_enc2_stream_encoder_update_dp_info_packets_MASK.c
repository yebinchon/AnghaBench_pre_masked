
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stream_encoder {int dummy; } ;
struct encoder_info_frame {int dummy; } ;
struct dcn10_stream_encoder {int dummy; } ;


 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct stream_encoder*,struct encoder_info_frame const*) ;

__attribute__((used)) static void FUNC_4(
 struct stream_encoder *VAR_4,
 const struct encoder_info_frame *VAR_5)
{
 struct dcn10_stream_encoder *VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7 = 0;

 FUNC_3(VAR_4, VAR_5);


 FUNC_1(VAR_2,
   VAR_1, &VAR_7);

 if (VAR_7)
  FUNC_2(VAR_0, VAR_3, 1);
}
