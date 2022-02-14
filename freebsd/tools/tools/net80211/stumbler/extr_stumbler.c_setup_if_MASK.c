
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; int i_type; int i_name; } ;
typedef int ifr ;
struct TYPE_2__ {struct ifreq ireq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,struct ifreq*) ;
 int VAR_6 ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(char *VAR_7) {
        struct ifreq VAR_8;
        unsigned int VAR_9;


        FUNC_2(&VAR_5.ireq, 0, sizeof(VAR_5.ireq));
        FUNC_4(VAR_5.ireq.i_name, VAR_7);
        VAR_5.ireq.i_type = VAR_0;

        FUNC_3(1);


        FUNC_2(&VAR_8, 0, sizeof(VAR_8));
        FUNC_4(VAR_8.ifr_name, VAR_7);
        if (FUNC_1(VAR_6, VAR_3, &VAR_8) == -1)
                FUNC_0(1, "ioctl(SIOCGIFFLAGS)");

        VAR_9 = (VAR_8.ifr_flags & 0xffff) | (VAR_8.ifr_flagshigh << 16);
        VAR_9 |= VAR_2 | VAR_1;

        FUNC_2(&VAR_8, 0, sizeof(VAR_8));
        FUNC_4(VAR_8.ifr_name, VAR_7);
        VAR_8.ifr_flags = VAR_9 & 0xffff;
        VAR_8.ifr_flagshigh = VAR_9 >> 16;
        if (FUNC_1(VAR_6, VAR_4, &VAR_8) == -1)
                FUNC_0(1, "ioctl(SIOCSIFFLAGS)");
}
