
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ctl_io {TYPE_1__ io_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,union ctl_io*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, int VAR_4, union ctl_io *VAR_5, const char *VAR_6)
{
 do {
  if (FUNC_0(VAR_3, VAR_0, VAR_5) == -1) {
   FUNC_1("%s: error sending CTL_IO ioctl", VAR_6);
   return (-1);
  }
 } while (((VAR_5->io_hdr.status & VAR_1) != VAR_2)
       && (VAR_4-- > 0));

 return (0);
}
