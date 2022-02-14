
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stream_encoder {int dummy; } ;
struct TYPE_2__ {int valid; } ;
struct encoder_info_frame {TYPE_1__ hdrsmd; TYPE_1__ spd; TYPE_1__ vsc; } ;
struct dce110_stream_encoder {int dummy; } ;


 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct dce110_stream_encoder*,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(
 struct stream_encoder *VAR_5,
 const struct encoder_info_frame *VAR_6)
{
 struct dce110_stream_encoder *VAR_7 = FUNC_0(VAR_5);
 uint32_t VAR_8 = 0;

 if (VAR_6->vsc.valid)
  FUNC_3(
     VAR_7,
     0,
     &VAR_6->vsc);

 if (VAR_6->spd.valid)
  FUNC_3(
    VAR_7,
    2,
    &VAR_6->spd);

 if (VAR_6->hdrsmd.valid)
  FUNC_3(
    VAR_7,
    3,
    &VAR_6->hdrsmd);




 FUNC_2(VAR_0, VAR_1, VAR_6->vsc.valid);
 FUNC_2(VAR_0, VAR_2, VAR_6->spd.valid);
 FUNC_2(VAR_0, VAR_3, VAR_6->hdrsmd.valid);
 VAR_8 = FUNC_1(VAR_0);
 if (VAR_8)
  FUNC_2(VAR_0, VAR_4, 1);
}
