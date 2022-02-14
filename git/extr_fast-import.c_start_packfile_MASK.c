
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct packed_git {int pack_fd; int do_not_close; int pack_name; } ;
struct pack_header {scalar_t__ hdr_entries; void* hdr_version; void* hdr_signature; } ;
typedef int hdr ;


 int FUNC_0 (struct packed_git*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct packed_git**,int) ;
 struct strbuf VAR_1 ;
 struct packed_git** VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct pack_header*,int) ;
 void* FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct strbuf*,char*) ;
 struct packed_git* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct strbuf VAR_9 = VAR_1;
 struct packed_git *VAR_10;
 struct pack_header VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(&VAR_9, "pack/tmp_pack_XXXXXX");
 FUNC_0(VAR_10, VAR_7, VAR_9.buf);
 FUNC_6(&VAR_9);

 VAR_10->pack_fd = VAR_12;
 VAR_10->do_not_close = 1;
 VAR_5 = FUNC_2(VAR_12, VAR_10->pack_name);

 VAR_11.hdr_signature = FUNC_4(VAR_0);
 VAR_11.hdr_version = FUNC_4(2);
 VAR_11.hdr_entries = 0;
 FUNC_3(VAR_5, &VAR_11, sizeof(VAR_11));

 VAR_4 = VAR_10;
 VAR_8 = sizeof(VAR_11);
 VAR_3 = 0;

 FUNC_1(VAR_2, VAR_6 + 1);
 VAR_2[VAR_6] = VAR_10;
}
