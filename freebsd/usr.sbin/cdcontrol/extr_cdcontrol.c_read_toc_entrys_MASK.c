
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_read_toc_entry {int data_len; int data; scalar_t__ starting_track; int address_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(int VAR_6)
{
 struct ioc_read_toc_entry VAR_7;

 VAR_7.address_format = VAR_4 ? VAR_2 : VAR_1;
 VAR_7.starting_track = 0;
 VAR_7.data_len = VAR_6;
 VAR_7.data = VAR_5;

 return (FUNC_0 (VAR_3, VAR_0, (char *) &VAR_7));
}
