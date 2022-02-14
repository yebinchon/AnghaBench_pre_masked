
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_device {struct ps3fb_softc* vd_softc; } ;
struct TYPE_2__ {int fb_depth; int fb_height; int fb_width; int fb_stride; int fb_size; int fb_bpp; int fb_vbase; int fb_cmsize; int fb_cmap; int fb_flags; } ;
struct ps3fb_softc {int sc_fbcontext; TYPE_1__ fb_info; } ;
typedef int linux_video_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ) ;
 struct ps3fb_softc VAR_4 ;
 int FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (struct vt_device*) ;
 int FUNC_6 (int ,int ,int,int,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct vt_device *VAR_5)
{
 struct ps3fb_softc *VAR_6;
 char VAR_7[24];
 int VAR_8 = 0;


 VAR_5->vd_softc = VAR_6 = &VAR_4;

 VAR_6->fb_info.fb_depth = 32;
 VAR_6->fb_info.fb_height = 1080;
 VAR_6->fb_info.fb_width = 1920;


 FUNC_2(VAR_7, sizeof(VAR_7));
 FUNC_1("video", VAR_7, sizeof(VAR_7));
 FUNC_4(VAR_7, "ps3fb:mode:%d", &VAR_8);

 switch (VAR_8) {
 case 1:
 case 2:
  VAR_6->fb_info.fb_height = 480;
  VAR_6->fb_info.fb_width = 720;
  break;
 case 3:
 case 8:
  VAR_6->fb_info.fb_height = 720;
  VAR_6->fb_info.fb_width = 1280;
  break;
 case 4:
 case 5:
 case 9:
 case 10:
  VAR_6->fb_info.fb_height = 1080;
  VAR_6->fb_info.fb_width = 1920;
  break;
 case 6:
 case 7:
  VAR_6->fb_info.fb_height = 576;
  VAR_6->fb_info.fb_width = 720;
  break;
 case 11:
  VAR_6->fb_info.fb_height = 768;
  VAR_6->fb_info.fb_width = 1024;
  break;
 case 12:
  VAR_6->fb_info.fb_height = 1024;
  VAR_6->fb_info.fb_width = 1280;
  break;
 case 13:
  VAR_6->fb_info.fb_height = 1200;
  VAR_6->fb_info.fb_width = 1920;
  break;
 }


 FUNC_0("hw.ps3fb.height", &VAR_6->fb_info.fb_height);
 FUNC_0("hw.ps3fb.width", &VAR_6->fb_info.fb_width);

 VAR_6->fb_info.fb_stride = VAR_6->fb_info.fb_width*4;
 VAR_6->fb_info.fb_size = VAR_6->fb_info.fb_height * VAR_6->fb_info.fb_stride;
 VAR_6->fb_info.fb_bpp = VAR_6->fb_info.fb_stride / VAR_6->fb_info.fb_width * 8;





 VAR_6->fb_info.fb_vbase = 0x10000000;
 VAR_6->fb_info.fb_flags |= VAR_2;
 VAR_6->fb_info.fb_cmsize = 16;


 FUNC_6(VAR_6->fb_info.fb_cmap, VAR_1,
     255, 16, 255, 8, 255, 0);


 FUNC_3(VAR_6->sc_fbcontext,
     VAR_3, 0, 0, 0, 0);
 FUNC_3(VAR_6->sc_fbcontext,
     VAR_3, 1, 0, 0, 0);

 FUNC_5(VAR_5);

 return (VAR_0);
}
