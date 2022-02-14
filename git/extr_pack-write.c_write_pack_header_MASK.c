
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pack_header {void* hdr_entries; void* hdr_version; void* hdr_signature; } ;
struct hashfile {int dummy; } ;
typedef int off_t ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hashfile*,struct pack_header*,int) ;
 void* FUNC_1 (int ) ;

off_t FUNC_2(struct hashfile *VAR_2, uint32_t VAR_3)
{
 struct pack_header VAR_4;

 VAR_4.hdr_signature = FUNC_1(VAR_0);
 VAR_4.hdr_version = FUNC_1(VAR_1);
 VAR_4.hdr_entries = FUNC_1(VAR_3);
 FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
 return sizeof(VAR_4);
}
