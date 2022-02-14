
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_encoder {int dummy; } ;
struct encoder_info_frame {int hdrsmd; int spd; int vendor; int gamut; int hfvsif; int avi; } ;
struct dcn10_stream_encoder {int dummy; } ;


 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct dcn10_stream_encoder*,int,int *) ;

__attribute__((used)) static void FUNC_3(
 struct stream_encoder *VAR_2,
 const struct encoder_info_frame *VAR_3)
{
 struct dcn10_stream_encoder *VAR_4 = FUNC_0(VAR_2);


 FUNC_1(VAR_0, VAR_1, 1);


 FUNC_2(VAR_4, 0, &VAR_3->avi);
 FUNC_2(VAR_4, 5, &VAR_3->hfvsif);
 FUNC_2(VAR_4, 2, &VAR_3->gamut);
 FUNC_2(VAR_4, 1, &VAR_3->vendor);
 FUNC_2(VAR_4, 3, &VAR_3->spd);
 FUNC_2(VAR_4, 4, &VAR_3->hdrsmd);
}
