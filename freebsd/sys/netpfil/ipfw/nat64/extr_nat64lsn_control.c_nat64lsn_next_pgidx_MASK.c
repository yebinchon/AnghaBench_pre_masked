
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nat64lsn_pgidx {int chunk; int port; int proto; scalar_t__ addr; int index; } ;
struct nat64lsn_pg {int chunks_count; } ;
struct nat64lsn_cfg {scalar_t__ pmask4; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct nat64lsn_cfg *VAR_4, struct nat64lsn_pg *VAR_5,
    union nat64lsn_pgidx *VAR_6)
{


 if (VAR_5 != ((void*)0)) {
  if (VAR_6->chunk < VAR_5->chunks_count - 1) {
   VAR_6->chunk++;
   return (0);
  }
 }
 VAR_6->chunk = 0;

 if (VAR_6->port < VAR_3 - 64) {
  VAR_6->port += 64;
  return (0);
 }
 VAR_6->port = VAR_2;

 switch (VAR_6->proto) {
 case 129:
  VAR_6->proto = 128;
  return (0);
 case 128:
  VAR_6->proto = VAR_0;
  return (0);
 default:
  VAR_6->proto = 129;
 }

 if (VAR_6->addr < VAR_4->pmask4) {
  VAR_6->addr++;
  return (1);
 }
 VAR_6->index = VAR_1;
 return (-1);
}
