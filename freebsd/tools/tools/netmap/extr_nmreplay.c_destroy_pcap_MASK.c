
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_pcap_file {int fd; int filesize; scalar_t__ data; } ;


 int FUNC_0 (struct nm_pcap_file*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nm_pcap_file*) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static void FUNC_4(struct nm_pcap_file *VAR_0)
{
    if (!VAR_0)
 return;

    FUNC_3((void *)(uintptr_t)VAR_0->data, VAR_0->filesize);
    FUNC_1(VAR_0->fd);
    FUNC_0(VAR_0, sizeof(*VAR_0));
    FUNC_2(VAR_0);
    return;
}
