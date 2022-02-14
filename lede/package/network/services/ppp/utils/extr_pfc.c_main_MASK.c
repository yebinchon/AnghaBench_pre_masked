
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bpf_program {int dummy; } ;
typedef int pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bpf_program*,int) ;
 scalar_t__ FUNC_2 (int *,struct bpf_program*,char*,int,int ) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7 (int VAR_2, char ** VAR_3)
{
    pcap_t *VAR_4;
    struct bpf_program VAR_5;
    u_int32_t VAR_6=0;

    int VAR_7 = 3;
    if (VAR_2 == 4)
    {
 if (!FUNC_6 (VAR_3[1], "-d"))
 {
     VAR_7 = FUNC_0 (VAR_3[2]);
     VAR_3 += 2;
     VAR_2 -=2;
 }
    }
    if (VAR_2 != 2)
    {
 FUNC_5 ("usage; %s [ -d <debug_level> ] expression\n", VAR_3[0]);
 return 1;
    }

    VAR_4 = FUNC_4(VAR_0, VAR_1);
    if (FUNC_2(VAR_4, &VAR_5, VAR_3[1], 1, VAR_6) == 0)
    {
 FUNC_5 ("#\n# Expression: %s\n#\n", VAR_3[1]);
 FUNC_1 (&VAR_5, VAR_7);
 return 0;
    }
    else
    {
 FUNC_5("error in active-filter expression: %s\n", FUNC_3(VAR_4));
    }
    return 1;
}
