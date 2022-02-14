
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char const* username; } ;
typedef TYPE_1__ git_cred_userpass_plaintext ;
struct TYPE_9__ {char const* username; } ;
typedef TYPE_2__ git_cred_username ;
struct TYPE_10__ {char const* username; } ;
typedef TYPE_3__ git_cred_ssh_key ;
struct TYPE_11__ {char const* username; } ;
typedef TYPE_4__ git_cred_ssh_interactive ;
struct TYPE_12__ {char const* username; } ;
typedef TYPE_5__ git_cred_ssh_custom ;
struct TYPE_13__ {int credtype; } ;
typedef TYPE_6__ git_cred ;
const char *FUNC_0(git_cred *VAR_0)
{
 switch (VAR_0->credtype) {
 case 129:
 {
  git_cred_username *VAR_1 = (git_cred_username *) VAR_0;
  return VAR_1->username;
 }
 case 128:
 {
  git_cred_userpass_plaintext *VAR_2 = (git_cred_userpass_plaintext *) VAR_0;
  return VAR_2->username;
 }
 case 131:
 case 130:
 {
  git_cred_ssh_key *VAR_3 = (git_cred_ssh_key *) VAR_0;
  return VAR_3->username;
 }
 case 133:
 {
  git_cred_ssh_custom *VAR_4 = (git_cred_ssh_custom *) VAR_0;
  return VAR_4->username;
 }
 case 132:
 {
  git_cred_ssh_interactive *VAR_5 = (git_cred_ssh_interactive *) VAR_0;
  return VAR_5->username;
 }

 default:
  return ((void*)0);
 }
}
