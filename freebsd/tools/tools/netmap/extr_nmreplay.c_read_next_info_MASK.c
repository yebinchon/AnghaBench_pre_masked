
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nm_pcap_file {char* cur; char const* lim; int err; int swap; } ;


 scalar_t__ FUNC_0 (char*,int,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct nm_pcap_file *VAR_0, int VAR_1)
{
    const char *VAR_2 = VAR_0->cur + VAR_1;
    uint32_t VAR_3;
    if (VAR_2 > VAR_0->lim) {
 VAR_0->err = 1;
 VAR_3 = 0;
    } else {
 VAR_3 = FUNC_0(VAR_0->cur, VAR_1, VAR_0->swap);
 VAR_0->cur = VAR_2;
    }
    return VAR_3;
}
