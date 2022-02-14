
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btx_hdr {scalar_t__* btx_magic; int btx_entry; void* btx_textsz; void* btx_pgctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct btx_hdr*,int,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_4, struct btx_hdr * VAR_5)
{
    if (FUNC_3(VAR_4, VAR_5, sizeof(*VAR_5), 0) != sizeof(*VAR_5) ||
 VAR_5->btx_magic[0] != VAR_0 ||
 VAR_5->btx_magic[1] != VAR_1 ||
 VAR_5->btx_magic[2] != VAR_2)
 FUNC_0(1, "%s: Not a BTX kernel", VAR_3);
    VAR_5->btx_pgctl = FUNC_1(VAR_5->btx_pgctl);
    VAR_5->btx_textsz = FUNC_1(VAR_5->btx_textsz);
    VAR_5->btx_entry = FUNC_2(VAR_5->btx_entry);
}
