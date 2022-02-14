
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0
     ("Usage: setchannel [-a {on|off}] [-c | -r | -s | -t] "
     "[-g geom] [-m chnl_set] [chnl | freq]\n"
     "  -a    Enable / disable AFC.\n"
     "  -c    Select composite input.\n"
     "  -d    Select tuner unit number.\n"
     "  -r    Select radio input.\n"
     "  -s    Select svideo input.\n"
     "  -t    Select tuner.\n"
     "  -g    Select geometry.\n"
     "          352x240 or 352x288 = VCD\n"
     "          480x480 or 480x576 = SVCD\n"
     "          352x480 or 352x576 = DVD (half D1)\n"
     "          720x480 or 720x576 = DVD (full D1)\n"
     "  -m    Select channel set / system.\n"
     "          0 = Tuner Default\n"
     "          %u = US Broadcast / NTSC\n"
     "          %u = US Cable / NTSC\n"
     "          %u = Western Europe / PAL\n"
     "          %u = Japan Broadcast / NTSC\n"
     "          %u = Japan Cable / NTSC\n"
     "          %u = Australia / PAL\n"
     "          %u = France / SECAM\n"
     "  chnl  Channel\n"
     "  freq  Frequency in MHz (must include decimal point).\n",
     VAR_5, VAR_1, VAR_6, VAR_3,
     VAR_4, VAR_0, VAR_2);
}
