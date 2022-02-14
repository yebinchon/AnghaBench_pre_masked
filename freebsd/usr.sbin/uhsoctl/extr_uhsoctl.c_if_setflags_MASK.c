
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, int VAR_5)
{
 struct ifreq VAR_6;
 int VAR_7, VAR_8;
 unsigned int VAR_9 = 0;

 FUNC_2(&VAR_6, 0, sizeof(struct ifreq));
 FUNC_4(VAR_6.ifr_name, VAR_4, sizeof(VAR_6.ifr_name));

 VAR_7 = FUNC_3(VAR_0, VAR_3, 0);
 if (VAR_7 < 0)
  return (-1);

 VAR_8 = FUNC_1(VAR_7, VAR_1, &VAR_6);
 if (VAR_8 == 0) {
  VAR_9 = (VAR_6.ifr_flags & 0xffff) | (VAR_6.ifr_flagshigh << 16);
 }

 if (VAR_5 < 0)
  VAR_9 &= ~(-VAR_5);
 else
  VAR_9 |= VAR_5;

 VAR_6.ifr_flags = VAR_9 & 0xffff;
 VAR_6.ifr_flagshigh = VAR_9 >> 16;

 VAR_8 = FUNC_1(VAR_7, VAR_2, &VAR_6);
 if (VAR_8 != 0)
  FUNC_5("ioctl SIOCSIFFLAGS");

 FUNC_0(VAR_7);
 return (VAR_8);
}
