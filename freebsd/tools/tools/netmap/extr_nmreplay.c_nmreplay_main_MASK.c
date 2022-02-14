
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _qs {char* prod_ifname; int * pcap; int cons_ifname; int t0; } ;
struct pipe_args {int * pb; int cons_core; struct _qs q; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (void*) ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void *
FUNC_10(void *VAR_1)
{
    struct pipe_args *VAR_2 = VAR_1;
    struct _qs *VAR_3 = &VAR_2->q;
    const char *VAR_4 = VAR_3->prod_ifname;

    FUNC_8(VAR_2->cons_core);
    FUNC_7(&VAR_3->t0, 0);
    if (VAR_4 == ((void*)0)) {
 goto fail;
    }
    VAR_3->pcap = FUNC_6(VAR_4);
    if (VAR_3->pcap == ((void*)0)) {
 FUNC_0("unable to read file %s", VAR_4);
 goto fail;
    }
    FUNC_5((void*)VAR_2);
    FUNC_3(VAR_3->pcap);
    VAR_3->pcap = ((void*)0);
    VAR_2->pb = FUNC_4(VAR_3->cons_ifname, ((void*)0), 0, ((void*)0));
    if (VAR_2->pb == ((void*)0)) {
 FUNC_0("cannot open netmap on %s", VAR_3->cons_ifname);
 VAR_0 = 1;
 return ((void*)0);
    }

    FUNC_1("prepare to send packets");
    FUNC_9(1000);
    FUNC_2((void*)VAR_2);
    FUNC_0("exiting on abort");
fail:
    if (VAR_3->pcap != ((void*)0)) {
 FUNC_3(VAR_3->pcap);
    }
    VAR_0 = 1;
    return ((void*)0);
}
