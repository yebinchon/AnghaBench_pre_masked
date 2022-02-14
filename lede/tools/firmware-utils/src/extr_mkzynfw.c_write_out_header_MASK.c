
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int t ;
struct zyn_rombin_hdr {void* mmap_addr; void* ccsum; void* ocsum; void* flags; void* csize; void* osize; void* type; void* addr; int sig; } ;
typedef int FILE ;


 int FUNC_0 (int,char*,void*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct zyn_rombin_hdr*,int ,int) ;
 int FUNC_7 (int *,int *,int,int *) ;

int
FUNC_8(FILE *VAR_4, struct zyn_rombin_hdr *VAR_5)
{
 struct zyn_rombin_hdr VAR_6;

 VAR_3 = 0;
 if (FUNC_4(VAR_4, 0, VAR_2) != 0) {
  FUNC_1("fseek failed on output file");
  return -1;
 }


 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.addr = FUNC_3(VAR_5->addr);
 FUNC_5(&VAR_6.sig, VAR_0, VAR_1);
 VAR_6.type = VAR_5->type;
 VAR_6.flags = VAR_5->flags;
 VAR_6.osize = FUNC_3(VAR_5->osize);
 VAR_6.csize = FUNC_3(VAR_5->csize);
 VAR_6.ocsum = FUNC_2(VAR_5->ocsum);
 VAR_6.ccsum = FUNC_2(VAR_5->ccsum);
 VAR_6.mmap_addr = FUNC_3(VAR_5->mmap_addr);

 FUNC_0(2, "hdr.addr      = 0x%08x", VAR_5->addr);
 FUNC_0(2, "hdr.type      = 0x%02x", VAR_5->type);
 FUNC_0(2, "hdr.osize     = 0x%08x", VAR_5->osize);
 FUNC_0(2, "hdr.csize     = 0x%08x", VAR_5->csize);
 FUNC_0(2, "hdr.flags     = 0x%02x", VAR_5->flags);
 FUNC_0(2, "hdr.ocsum     = 0x%04x", VAR_5->ocsum);
 FUNC_0(2, "hdr.ccsum     = 0x%04x", VAR_5->ccsum);
 FUNC_0(2, "hdr.mmap_addr = 0x%08x", VAR_5->mmap_addr);

 return FUNC_7(VAR_4, (uint8_t *)&VAR_6, sizeof(VAR_6), ((void*)0));
}
