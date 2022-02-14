
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ippseudo {unsigned char ippseudo_src; unsigned char ippseudo_dst; int ippseudo_len; int ippseudo_p; scalar_t__ ippseudo_pad; } ;
typedef unsigned char in_addr ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned short*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

unsigned int FUNC_5(unsigned char *VAR_1, int VAR_2, struct in_addr *VAR_3,
                          struct in_addr *VAR_4) {
        unsigned char *VAR_5;
        struct ippseudo *VAR_6;

        VAR_5 = (unsigned char*) FUNC_3(VAR_2 + sizeof(struct ippseudo));
        if(!VAR_5)
  FUNC_0(1, "malloc()");

        VAR_6 = (struct ippseudo*) VAR_5;

        FUNC_4(&VAR_6->ippseudo_src, VAR_3, 4);
        FUNC_4(&VAR_6->ippseudo_dst, VAR_4, 4);
        VAR_6->ippseudo_pad = 0;
        VAR_6->ippseudo_p = VAR_0;
        VAR_6->ippseudo_len = FUNC_1(VAR_2);

        FUNC_4(VAR_5 + sizeof(struct ippseudo), VAR_1, VAR_2);

        return FUNC_2((unsigned short*)VAR_5, VAR_2+sizeof(struct ippseudo));
}
