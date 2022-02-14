
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_oflag; int c_lflag; int c_iflag; int c_cflag; } ;
struct modes {int set; int unset; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 struct modes* VAR_0 ;
 struct modes* VAR_1 ;
 struct modes* VAR_2 ;
 struct modes* VAR_3 ;

int
FUNC_1(char *VAR_4, struct termios *VAR_5)
{
 struct modes *VAR_6;

 for (VAR_6 = VAR_0; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_4, VAR_6->name)) {
   VAR_5->c_cflag &= ~VAR_6->unset;
   VAR_5->c_cflag |= VAR_6->set;
   return (1);
  }
 for (VAR_6 = VAR_1; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_4, VAR_6->name)) {
   VAR_5->c_iflag &= ~VAR_6->unset;
   VAR_5->c_iflag |= VAR_6->set;
   return (1);
  }
 for (VAR_6 = VAR_2; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_4, VAR_6->name)) {
   VAR_5->c_lflag &= ~VAR_6->unset;
   VAR_5->c_lflag |= VAR_6->set;
   return (1);
  }
 for (VAR_6 = VAR_3; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_4, VAR_6->name)) {
   VAR_5->c_oflag &= ~VAR_6->unset;
   VAR_5->c_oflag |= VAR_6->set;
   return (1);
  }
 return (0);
}
