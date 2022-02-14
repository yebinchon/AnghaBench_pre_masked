
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_info {int vi_mode; scalar_t__ vi_width; scalar_t__ vi_height; scalar_t__ vi_cwidth; scalar_t__ vi_cheight; int vi_flags; int vi_mem_model; int vi_depth; int vi_planes; int vi_buffer; scalar_t__ vi_buffer_size; scalar_t__ vi_window_gran; scalar_t__ vi_window_size; int vi_window; } ;
typedef int info ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;

 scalar_t__ FUNC_0 (int ,int ,struct video_info*) ;
 int FUNC_1 (struct video_info*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char VAR_4[80];
 struct video_info VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_2("    mode#     flags   type    size       "
        "font      window      linear buffer\n");
 FUNC_2("---------------------------------------"
        "---------------------------------------\n");

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 for (VAR_8 = 0; VAR_8 <= VAR_1; ++VAR_8) {
  VAR_5.vi_mode = VAR_8;
  if (FUNC_0(0, VAR_0, &VAR_5))
   continue;
  if (VAR_5.vi_mode != VAR_8)
   continue;
  if (VAR_5.vi_width == 0 && VAR_5.vi_height == 0 &&
      VAR_5.vi_cwidth == 0 && VAR_5.vi_cheight == 0)
   continue;

  FUNC_2("%3d (0x%03x)", VAR_8, VAR_8);
      FUNC_2(" 0x%08x", VAR_5.vi_flags);
  if (VAR_5.vi_flags & VAR_2) {
   VAR_6 = 'G';

   if (VAR_5.vi_mem_model == VAR_3)
    FUNC_3(VAR_4, sizeof(VAR_4), "%dx%dx%d %d",
        VAR_5.vi_width, VAR_5.vi_height,
        VAR_5.vi_depth, VAR_5.vi_planes);
   else {
    switch (VAR_5.vi_mem_model) {
    case 129:
     VAR_7 = 'P';
     break;
    case 131:
     VAR_7 = 'D';
     break;
    case 132:
     VAR_7 = 'C';
     break;
    case 130:
     VAR_7 = 'H';
     break;
    case 128:
     VAR_7 = 'V';
     break;
    default:
     VAR_7 = ' ';
     break;
    }
    FUNC_3(VAR_4, sizeof(VAR_4), "%dx%dx%d %c",
        VAR_5.vi_width, VAR_5.vi_height,
        VAR_5.vi_depth, VAR_7);
   }
  } else {
   VAR_6 = 'T';

   FUNC_3(VAR_4, sizeof(VAR_4), "%dx%d",
     VAR_5.vi_width, VAR_5.vi_height);
  }

  FUNC_2(" %c %-15s", VAR_6, VAR_4);
  FUNC_3(VAR_4, sizeof(VAR_4), "%dx%d",
    VAR_5.vi_cwidth, VAR_5.vi_cheight);
  FUNC_2(" %-5s", VAR_4);
      FUNC_2(" 0x%05zx %2dk %2dk",
         VAR_5.vi_window, (int)VAR_5.vi_window_size/1024,
         (int)VAR_5.vi_window_gran/1024);
      FUNC_2(" 0x%08zx %dk\n",
         VAR_5.vi_buffer, (int)VAR_5.vi_buffer_size/1024);
 }
}
